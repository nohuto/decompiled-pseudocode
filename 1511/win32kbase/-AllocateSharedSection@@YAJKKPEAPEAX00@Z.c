/*
 * XREFs of ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00B4EA8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0076988 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     Win32CreateSection @ 0x1C00AFD74 (Win32CreateSection.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, __int64 a2, void **a3, void **a4, void **a5)
{
  void **v5; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  void *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  a5 = (void **)a1;
  *v5 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  result = Win32CreateSection(a3, 6LL, (__int64)a3, (__int64)&a5, v22, 138412032);
  if ( (int)result >= 0 )
  {
    v11 = (unsigned int)a5;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9);
    v14 = MapKernelSectionForUserMapping(*a3, CurrentProcess, (unsigned int)v11, v5);
    if ( v14 >= 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15);
      v19 = PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process);
      if ( v19 < 0
        || (v19 = MapKernelSectionForUserMapping(*a3, Process, v11, a4), ObfDereferenceObject(Process), v19 < 0) )
      {
        v20 = *v5;
        v21 = PsGetCurrentProcess(v18, v17);
        MmUnmapViewOfSection(v21, v20);
        if ( !*a3 )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
        ObfDereferenceObject(*a3);
        *a3 = 0LL;
        *v5 = 0LL;
      }
      return (unsigned int)v19;
    }
    else
    {
      if ( !*a3 )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      return (unsigned int)v14;
    }
  }
  return result;
}
