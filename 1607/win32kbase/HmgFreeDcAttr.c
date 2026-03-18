/*
 * XREFs of HmgFreeDcAttr @ 0x1C0034278
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     bFreeDCAttributesWorker @ 0x1C0034080 (bFreeDCAttributesWorker.c)
 *     GdiThreadCallout @ 0x1C005C7B0 (GdiThreadCallout.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 */

_QWORD *__fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax

  v2 = 0LL;
  result = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    v2 = *result;
  if ( a1 && v2 )
  {
    if ( !*(_QWORD *)(v2 + 24) )
    {
      *(_QWORD *)(v2 + 24) = a1;
      return result;
    }
    result = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
    v8 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v6, v5, v7);
      v10 = v8 + 24;
      if ( (__int64 *)*v10 == v10 || (v11 = *v10, *(_DWORD *)(*v10 + 16) == 9) )
      {
        v11 = PALLOCMEM2(0x60uLL);
        if ( !v11 )
          return (_QWORD *)GreReleaseHmgrSemaphore(v9);
        v12 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 )
          __fastfail(3u);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v11 + 8) = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *v10 = v11;
        *(_DWORD *)(v11 + 16) = 0;
      }
      *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16))++ + 24) = a1;
      v8[5] = a1;
      return (_QWORD *)GreReleaseHmgrSemaphore(v9);
    }
  }
  return result;
}
