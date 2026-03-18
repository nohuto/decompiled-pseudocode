/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1C00A0F80
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8LL * a2);
  else
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * a2);
  return *(_QWORD *)(v3 + 64);
}
