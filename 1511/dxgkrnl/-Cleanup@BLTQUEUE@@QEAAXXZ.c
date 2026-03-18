/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C015D8F0
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C015D860 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( *((_QWORD *)this + 37) )
  {
    *((_QWORD *)this + 39) = KeGetCurrentThread();
    *((_BYTE *)this + 260) = 1;
    KeSetEvent(*((PRKEVENT *)this + 30), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 37), 0, 0LL);
    ZwClose(*((HANDLE *)this + 37));
    v2 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
    LOBYTE(v3) = 1;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    ExDeleteTimer(v2, v3, 0LL, 0LL);
    *((_QWORD *)this + 40) = 0LL;
  }
}
