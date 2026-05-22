/*
 * XREFs of ?FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x18005E280
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x18005E32C (-GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall PointerProcessor::FindNewPrimaryPointer(
        PointerProcessor *this,
        struct Pointer **a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  char v5; // r10
  unsigned int v6; // esi
  char v7; // r11
  unsigned int v8; // edi
  __int64 v9; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a3 )
    goto LABEL_15;
  do
  {
    if ( !v5 && (*((_BYTE *)*a2 + 4) & 1) != 0 )
    {
      v5 = 1;
      v6 = v9;
    }
    if ( !v7 && (*((_BYTE *)*a2 + 4) & 2) != 0 )
    {
      v7 = 1;
      v8 = v9;
    }
    if ( v5 && v7 )
      goto LABEL_12;
    v9 = (unsigned int)(v9 + 1);
    ++a2;
  }
  while ( (unsigned int)v9 < a3 );
  if ( v7 )
  {
LABEL_12:
    *a4 = v8;
    return v4;
  }
  if ( v5 )
  {
    *a4 = v6;
  }
  else
  {
LABEL_15:
    v4 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 501, 255);
  }
  return v4;
}
