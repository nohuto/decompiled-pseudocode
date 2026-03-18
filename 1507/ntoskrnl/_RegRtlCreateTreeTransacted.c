/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x1404DE5F8
 * Callers:
 *     _SysCtxRegCreateTree @ 0x1404DE588 (_SysCtxRegCreateTree.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  NTSTATUS KeyTransacted; // edi
  size_t v15; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  unsigned __int64 v18; // rbx
  HANDLE i; // rbp
  unsigned __int64 v20; // rdi
  wchar_t *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // cl
  ULONG dwFlags; // [rsp+28h] [rbp-60h]
  void *v28; // [rsp+50h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-30h] BYREF

  v9 = a4;
  v10 = a3;
  v28 = 0LL;
  KeyTransacted = RegRtlCreateKeyTransacted(Handle, pszSrc, a3, a4, a5, a6, a7, a8, a9);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RtlUnalignedStringCchLengthW(pszSrc, 0x7FFFuLL, &pcchLength);
    if ( KeyTransacted >= 0 )
    {
      v15 = pcchLength + 1;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), 0x4C474552u);
      v17 = PoolWithTag;
      if ( PoolWithTag )
      {
        KeyTransacted = RtlStringCchCopyExW(PoolWithTag, v15, pszSrc, 0LL, 0LL, 0x100u);
        if ( !KeyTransacted )
        {
          v18 = (unsigned __int64)v17;
          for ( i = Handle; ; i = v28 )
          {
            v20 = v18;
            v21 = wcschr((const wchar_t *)v18, 0x5Cu);
            v22 = 0LL;
            v18 = (unsigned __int64)v21;
            if ( !v21 )
              goto LABEL_17;
            *v21 = 0;
            do
              v18 += 2LL;
            while ( *(_WORD *)v18 == 92 );
            v18 &= -(__int64)(*(_WORD *)v18 != 0);
            if ( v18 )
            {
              v23 = 4LL;
              v24 = v10 & 0xFFFFFFFC;
              v25 = 0LL;
              v26 = 0;
            }
            else
            {
LABEL_17:
              v25 = a5;
              v24 = v10;
              v26 = a6;
              v23 = v9;
              v22 = a8;
            }
            LOBYTE(dwFlags) = v26;
            KeyTransacted = RegRtlCreateKeyTransacted(i, v20, v24, v23, v25, dwFlags, &v28, v22, a9);
            if ( i != Handle )
              ZwClose(i);
            if ( KeyTransacted )
              break;
            if ( !v18 )
            {
              *a7 = v28;
              break;
            }
          }
        }
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)KeyTransacted;
}
