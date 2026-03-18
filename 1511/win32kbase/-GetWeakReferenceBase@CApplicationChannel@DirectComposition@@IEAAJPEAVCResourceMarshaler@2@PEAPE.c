/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C001AACC
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0016544 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PE.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  __int64 v3; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  struct DirectComposition::CWeakReferenceBase *v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::CWeakReferenceBase *v13; // [rsp+28h] [rbp-20h]

  v3 = 0LL;
  v7 = 0;
  if ( (*((_DWORD *)a2 + 4) & 8) != 0 )
  {
    Buffer = a2;
    v13 = 0LL;
    v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer);
    if ( v11 )
      v3 = v11[1];
    ++*(_DWORD *)(v3 + 8);
    goto LABEL_11;
  }
  v8 = Win32AllocPoolWithQuotaZInit(0x18uLL);
  v9 = (struct DirectComposition::CWeakReferenceBase *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = a2;
    *(_DWORD *)(v8 + 8) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v7 = -1073741801;
    goto LABEL_7;
  }
  Buffer = a2;
  v13 = v9;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer, 0x10u, 0LL) )
  {
    v7 = -1073741801;
    Win32FreePool(v9);
LABEL_11:
    v9 = (struct DirectComposition::CWeakReferenceBase *)v3;
    goto LABEL_7;
  }
  *((_DWORD *)a2 + 4) |= 8u;
LABEL_7:
  result = v7;
  *a3 = v9;
  return result;
}
