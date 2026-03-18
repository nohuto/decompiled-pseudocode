/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C00D6304
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C00BA550 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00D6568 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C00D4DE4 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00D6EF8 (RIMIDESetLinkCollectionUsageValues.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v5; // r13d
  int v6; // esi
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+44h] [rbp-54h] BYREF
  int *v22; // [rsp+48h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v26; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 1;
  v26 = 0;
  v21 = 0;
  v22 = 0LL;
  v5 = 1;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = (char *)Object;
    v8 = *((_QWORD *)Object + 56);
    v9 = *((_QWORD *)Object + 52);
    if ( !*(_DWORD *)(v8 + 16) )
      *(_DWORD *)(v8 + 16) = 1;
    RIMLockExclusive(v9 + 96);
    if ( *(_BYTE *)(v9 + 73) )
    {
      v6 = -1073741637;
    }
    else
    {
      v10 = *((_DWORD *)v7 + 66);
      if ( (v10 & 8) != 0 || (v10 & 4) != 0 )
        v22 = &v21;
      memset(*(void **)(*((_QWORD *)v7 + 66) + 24LL), 0, *(unsigned __int16 *)(*((_QWORD *)v7 + 66) + 44LL));
      if ( !a3 )
        goto LABEL_33;
      v11 = 1;
      v12 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex(
                              (struct RIMDEV *)(v7 + 64),
                              (unsigned __int16)*v12,
                              &v26,
                              v11) )
      {
        v13 = *((_DWORD *)v7 + 66);
        if ( ((v13 & 8) != 0 || (v13 & 4) != 0) && *(v12 - 4) == 13 && *(v12 - 3) == 84 )
          v5 = *((_DWORD *)v12 - 1);
        v14 = RIMIDESetLinkCollectionUsageValues((int)v7 + 64, 0, (unsigned int)a2 + 12 * v3, v26, (__int64)v22);
        if ( !v14 )
          goto LABEL_33;
        if ( *v12 )
        {
          v11 = 0;
          v20 = 0;
        }
        else
        {
          v11 = v20;
        }
        ++v3;
        v12 += 6;
        if ( v3 >= a3 )
          goto LABEL_23;
      }
      v14 = 0;
LABEL_23:
      if ( v14 )
      {
        v15 = *((_DWORD *)v7 + 66);
        if ( (v15 & 4) != 0 || (v15 & 8) != 0 )
        {
          v16 = v21;
          if ( v5 == v21 )
          {
            *((_DWORD *)v7 + 66) = v15 & 0xFFFFFFFB;
          }
          else
          {
            v6 = -1073741668;
            *((_DWORD *)v7 + 66) = v15 | 4;
            v19 = v16;
            v18 = v5;
            WPP_RECORDER_SF_dd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              5u,
              0x13u,
              (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
              v18,
              v19);
          }
          *((_DWORD *)v7 + 66) &= ~8u;
        }
        if ( v6 < 0 )
        {
          v6 = -1073741811;
        }
        else
        {
          RIMLockExclusive(v9 + 696);
          *((_DWORD *)v7 + 80) = 0;
          *((_QWORD *)v7 + 41) = *(unsigned __int16 *)(*((_QWORD *)v7 + 66) + 44LL);
          rimProcessDeviceBufferAndStartRead(v9, (__int64)(v7 + 64));
          RIMUnlockExclusive(v9 + 696);
        }
      }
      else
      {
LABEL_33:
        v6 = -1073741668;
      }
    }
    RIMUnlockExclusive(v9 + 96);
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
