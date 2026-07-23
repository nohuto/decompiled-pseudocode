/*
 * XREFs of PiDmCmObjectMatchCallback @ 0x1404E3C44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmCmObjectMatchCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( *(_QWORD *)a2 )
    *a3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2)(
            *(_QWORD *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 16),
            *(unsigned int *)(a2 + 16),
            *(_QWORD *)(a2 + 8));
  else
    *a3 = 1;
  return 0LL;
}
