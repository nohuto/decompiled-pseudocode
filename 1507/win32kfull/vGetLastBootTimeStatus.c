/*
 * XREFs of vGetLastBootTimeStatus @ 0x1C013CC68
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C013D334 (bQueryFntCacheReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C013D80C (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 */

__int64 vGetLastBootTimeStatus()
{
  int GreRegKey; // eax
  __int64 v1; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  GreRegKey = GetGreRegKey(
                &Handle,
                0x80000000,
                L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  v1 = qword_1C0323DF0;
  *(_DWORD *)(qword_1C0323DF0 + 12) = 0;
  if ( GreRegKey >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle) )
      *(_DWORD *)(qword_1C0323DF0 + 12) = 0;
    ZwClose(Handle);
    v1 = qword_1C0323DF0;
  }
  result = *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 16) = result;
  return result;
}
