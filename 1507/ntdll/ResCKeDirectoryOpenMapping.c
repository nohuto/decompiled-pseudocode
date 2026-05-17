/*
 * XREFs of ResCKeDirectoryOpenMapping @ 0x18000EE38
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     ResCDirectoryValidate @ 0x1800F828C (ResCDirectoryValidate.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 *     ResCDirectoryCreateAndPopulate @ 0x1800FBEF4 (ResCDirectoryCreateAndPopulate.c)
 */

__int64 __fastcall ResCKeDirectoryOpenMapping(int a1, __int64 a2, int a3, int a4, int a5, unsigned int *a6)
{
  int v6; // ebx
  unsigned int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v6 = 16;
  v16 = 0;
  if ( a3 )
    v6 = 18;
  if ( a4 )
    v6 |= 4u;
  if ( a5 )
    v6 |= 8u;
  v8 = a6;
  if ( a6 )
    v16 = *a6;
  v9 = ResCMapCMFModule(v6, a1, (unsigned int)&v17, (unsigned int)&v16, (__int64)&a5);
  v10 = v9;
  if ( v8 )
    *v8 = v16 & 0xFFE8FFFF;
  if ( !v9 )
    return 0LL;
  if ( a1 >= 0 && a5 != a1 )
  {
    v12 = v9;
LABEL_17:
    ResUnmapViewOfFile(v12);
    return 0LL;
  }
  v13 = ResCDirectoryCreateAndPopulate(v9, v17, 1LL);
  v14 = v13;
  if ( v13 )
  {
    if ( (v16 & 0x1C0000) == 0 )
    {
      if ( (unsigned int)ResCDirectoryValidate(v13, v17) )
      {
        ResCMapCMFModule(v6 | 0x60000, a1, 0, 0, 0LL);
      }
      else
      {
        v15 = v6 | 0x120000;
        ResCMapCMFModule(v15, a1, 0, 0, 0LL);
        if ( (v15 & 0x10000) == 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
          v12 = v10;
          goto LABEL_17;
        }
        *(_DWORD *)(*(_QWORD *)(v14 + 24) + 48LL) = 0x100000;
      }
    }
  }
  else
  {
    ResUnmapViewOfFile(v10);
  }
  return v14;
}
