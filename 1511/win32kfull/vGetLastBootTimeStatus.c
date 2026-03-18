/*
 * XREFs of vGetLastBootTimeStatus @ 0x1C00D4858
 * Callers:
 *     InitFNTCache @ 0x1C00D4190 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00D45D4 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1C00D4728 (bQueryFntCacheReg.c)
 */

__int64 vGetLastBootTimeStatus()
{
  NTSTATUS GreRegKey; // eax
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  GreRegKey = GetGreRegKey(
                &Handle,
                0x80000000,
                L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  v1 = qword_1C0323628;
  *(_DWORD *)(qword_1C0323628 + 12) = 0;
  if ( GreRegKey >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle, L"LastBootTimeFontCacheState", &v3) )
      *(_DWORD *)(qword_1C0323628 + 12) = v3;
    ZwClose(Handle);
    v1 = qword_1C0323628;
  }
  result = *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 16) = result;
  return result;
}
