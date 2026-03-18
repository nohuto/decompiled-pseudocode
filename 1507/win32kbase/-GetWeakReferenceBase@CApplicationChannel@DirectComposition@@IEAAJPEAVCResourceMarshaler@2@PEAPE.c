/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C002D8E8
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0029700 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PE.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?SafeAddRef@CWeakReferenceBase@DirectComposition@@AEAAKXZ @ 0x1C00D54AC (-SafeAddRef@CWeakReferenceBase@DirectComposition@@AEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  DirectComposition::CWeakReferenceBase *v7; // rbx
  PVOID v8; // rax
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CWeakReferenceBase *v12; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)a2 + 4) & 8) != 0 )
  {
    Buffer = a2;
    v12 = 0LL;
    v7 = 0LL;
    v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer);
    if ( v8 )
      v7 = (DirectComposition::CWeakReferenceBase *)*((_QWORD *)v8 + 1);
    if ( !DirectComposition::CWeakReferenceBase::SafeAddRef(v7) )
      return 3223191811LL;
  }
  else
  {
    v10 = Win32AllocPoolWithQuotaZInit(0x18uLL);
    v7 = (DirectComposition::CWeakReferenceBase *)v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 16) = a2;
      *(_DWORD *)(v10 + 8) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      Buffer = a2;
      v12 = v7;
      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer, 0x10u, 0LL) )
      {
        *((_DWORD *)a2 + 4) |= 8u;
      }
      else
      {
        v3 = -1073741801;
        Win32FreePool(v7);
        v7 = 0LL;
      }
    }
    else
    {
      v3 = -1073741801;
    }
  }
  *a3 = v7;
  return v3;
}
