/*
 * XREFs of ResCKeDirectoryOpenMapping @ 0x18005A100
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18005A004 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _ResCMapCMFModule @ 0x18005A1A0 (_ResCMapCMFModule.c)
 *     ResCDirectoryValidate @ 0x1800FFED4 (ResCDirectoryValidate.c)
 *     _ResUnmapViewOfFile @ 0x180104D1C (_ResUnmapViewOfFile.c)
 *     ResCDirectoryCreateAndPopulate @ 0x180105C1C (ResCDirectoryCreateAndPopulate.c)
 */

_QWORD *__fastcall ResCKeDirectoryOpenMapping(int a1, __int64 a2, int a3, int a4, ULONG CacheIndexOut, int *a6)
{
  int v6; // ebx
  int *v8; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  void *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdi
  int v15; // ebx
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v6 = 16;
  v16 = 0;
  if ( a3 )
    v6 = 18;
  if ( a4 )
    v6 |= 4u;
  if ( CacheIndexOut )
    v6 |= 8u;
  v8 = a6;
  if ( a6 )
    v16 = *a6;
  v9 = ResCMapCMFModule(v6, a1, (int)&v17, (int)&v16, &CacheIndexOut);
  v10 = (void *)v9;
  if ( v8 )
    *v8 = v16 & 0xFFE8FFFF;
  if ( !v9 )
    return 0LL;
  if ( a1 >= 0 && CacheIndexOut != a1 )
  {
    v12 = (void *)v9;
LABEL_17:
    ResUnmapViewOfFile(v12);
    return 0LL;
  }
  v13 = ResCDirectoryCreateAndPopulate(v9, (unsigned int)v17, 1LL);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    if ( (v16 & 0x1C0000) == 0 )
    {
      if ( (unsigned int)ResCDirectoryValidate(v13, (unsigned int)v17) )
      {
        ResCMapCMFModule(v6 | 0x60000, a1, 0, 0, 0LL);
      }
      else
      {
        v15 = v6 | 0x120000;
        ResCMapCMFModule(v15, a1, 0, 0, 0LL);
        if ( (v15 & 0x10000) == 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
          v12 = v10;
          goto LABEL_17;
        }
        *(_DWORD *)(v14[3] + 48LL) = 0x100000;
      }
    }
  }
  else
  {
    ResUnmapViewOfFile(v10);
  }
  return v14;
}
