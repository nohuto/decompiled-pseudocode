/*
 * XREFs of ClearAppStarting @ 0x1C0011F50
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     InitSystemThread @ 0x1C0080020 (InitSystemThread.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearAppStarting(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax

  v1 = &gppiStarting;
  if ( gppiStarting )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == a1 )
        break;
      v1 = (__int64 *)(v2 + 336);
      if ( !*(_QWORD *)(v2 + 336) )
        goto LABEL_4;
    }
    *v1 = *(_QWORD *)(a1 + 336);
  }
LABEL_4:
  *(_DWORD *)(a1 + 12) &= ~0x40u;
}
