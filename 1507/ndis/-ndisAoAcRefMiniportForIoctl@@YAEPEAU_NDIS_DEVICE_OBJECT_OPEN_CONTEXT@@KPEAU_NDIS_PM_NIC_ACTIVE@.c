/*
 * XREFs of ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0008DA0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C000E6E4 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006AB64 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 */

unsigned __int8 __fastcall ndisAoAcRefMiniportForIoctl(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        enum _NDIS_PM_COMPONENT_ID *a3,
        char a4,
        enum _NDIS_MP_REFTAG a5,
        int *a6,
        struct _NDIS_MINIPORT_BLOCK **a7)
{
  unsigned __int8 v7; // bl
  struct _NDIS_MINIPORT_BLOCK *v11; // rsi
  unsigned __int8 result; // al
  int v13; // ecx
  union _NET_LUID_LH *v14; // r8
  int v15; // eax
  struct _NDIS_MINIPORT_BLOCK *v16; // rax
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v18; // al
  _LIST_ENTRY *v19; // rbp
  _LIST_ENTRY *Blink; // rdx

  v7 = 0;
  v11 = 0LL;
  if ( !*(_BYTE *)a1 )
  {
    *a6 = -1073741790;
    goto LABEL_6;
  }
  if ( a2 < 0x14 )
  {
    *a6 = -1073741789;
    goto LABEL_6;
  }
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    if ( !ndisValidComponentId(a3[4]) )
    {
      *a6 = -1073741811;
      goto LABEL_6;
    }
    if ( *((_BYTE *)a1 + 40) )
    {
      *a6 = -1073741130;
      goto LABEL_6;
    }
    v15 = *((_DWORD *)a1 + 6);
    if ( v15 != v13 && (v15 || !a4) )
    {
      *a6 = -1073741816;
      goto LABEL_6;
    }
    v16 = ndisReferenceMiniportByNetLuid(v14[1], a5);
    v11 = v16;
    if ( !v16 )
    {
      *a6 = -1071448058;
      goto LABEL_6;
    }
    AoAc = v16->AoAc;
    if ( !AoAc )
    {
      *a6 = -1071447877;
LABEL_29:
      ndisDereferenceMiniport((__int64)v11, a5);
      v11 = 0LL;
      goto LABEL_6;
    }
    v18 = KeAcquireSpinLockRaiseToDpc(&v16->AoAc->Lock);
    if ( *((_DWORD *)a1 + 6) || !a4 )
    {
      if ( *((struct _NDIS_MINIPORT_BLOCK **)a1 + 4) != v11 )
      {
        KeReleaseSpinLock(&AoAc->Lock, v18);
        *a6 = -1073741816;
        goto LABEL_29;
      }
    }
    else
    {
      *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6) = a3[4];
      *((_QWORD *)a1 + 4) = v11;
      v19 = (_LIST_ENTRY *)((char *)a1 + 8);
      Blink = AoAc->HandleList.Blink;
      v19->Flink = &AoAc->HandleList;
      v19->Blink = Blink;
      if ( Blink->Flink != &AoAc->HandleList )
        __fastfail(3u);
      Blink->Flink = v19;
      AoAc->HandleList.Blink = v19;
      ++AoAc->HandleListCount;
    }
    KeReleaseSpinLock(&AoAc->Lock, v18);
    v7 = 1;
    goto LABEL_6;
  }
  *a6 = 0;
LABEL_6:
  result = v7;
  *a7 = v11;
  return result;
}
