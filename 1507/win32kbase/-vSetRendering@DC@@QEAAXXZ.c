/*
 * XREFs of ?vSetRendering@DC@@QEAAXXZ @ 0x1C003DAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DC::vSetRendering(DC *this)
{
  int v2; // ecx
  char *v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 10);
  v3 = (char *)this + 1416;
  if ( (v2 & 1) == 0 )
    v3 = (char *)this + 1408;
  v4 = (*((_DWORD *)this + 9) & 0x4000) == 0;
  *((_QWORD *)this + 177) = *(_QWORD *)v3;
  v6 = *((_OWORD *)this + 89);
  *((_DWORD *)this + 10) = v2 | 1;
  *((_OWORD *)this + 90) = v6;
  if ( !v4 )
  {
    v5 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v5 + 240) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(v5 + 304) + 64LL), UserRequest, 0, 0, 0LL);
      ++*(_DWORD *)(*((_QWORD *)this + 64) + 316LL);
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 64) + 304LL) + 64LL), 0);
    }
  }
}
