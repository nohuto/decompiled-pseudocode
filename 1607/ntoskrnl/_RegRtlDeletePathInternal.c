/*
 * XREFs of _RegRtlDeletePathInternal @ 0x1406E0808
 * Callers:
 *     _PnpCtxRegDeletePath @ 0x1406D71E4 (_PnpCtxRegDeletePath.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x1404C5308 (_RegRtlQueryInfoKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14056260C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140562748 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeletePathInternal(char *a1, const wchar_t *a2, char a3, void *a4, int a5)
{
  int v9; // ebx
  size_t v10; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rdi
  char i; // al
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // rax
  size_t v18; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-20h] BYREF

  Handle = 0LL;
  v9 = RtlUnalignedStringCchLengthW(a2, 0x7FFFuLL, &v18);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = v18 + 1;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (v18 + 1), 0x4C474552u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v9 = RtlStringCchCopyExW(PoolWithTag, v10, a2, 0LL, 0LL, 0x100u);
  if ( v9 )
    goto LABEL_26;
  for ( i = 1; ; i = 0 )
  {
    if ( i && a3 )
    {
      v14 = RegRtlDeleteTreeInternal(a1, v12, a4);
      goto LABEL_17;
    }
    v15 = RegRtlOpenKeyTransacted(a1, v12, 0, 1u, &Handle, a4);
    v9 = v15;
    if ( !v15 )
    {
      v9 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v18, 0LL, 0LL);
      ZwClose(Handle);
      if ( v9 != -1073741444 && v9 )
        goto LABEL_26;
      if ( a5 || (_DWORD)v18 )
      {
        v9 = -1073741535;
        goto LABEL_26;
      }
      goto LABEL_16;
    }
    if ( v15 != -1073741772 )
      break;
LABEL_16:
    v14 = RegRtlDeleteKeyTransacted(a1, v12, 0LL);
LABEL_17:
    v9 = v14;
    if ( v14 && v14 != -1073741772 )
      goto LABEL_26;
    v16 = wcsrchr(v12, 0x5Cu);
    if ( !v16 )
      goto LABEL_26;
    for ( *v16 = 0; v16 != v12; *v16 = 0 )
    {
      if ( *--v16 != 92 )
        break;
    }
  }
  if ( v15 == -1073741444 )
    v9 = 0;
LABEL_26:
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v9;
}
