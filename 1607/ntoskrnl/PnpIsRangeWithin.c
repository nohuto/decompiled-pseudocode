/*
 * XREFs of PnpIsRangeWithin @ 0x14055BAAC
 * Callers:
 *     PnpNeedToReleaseBootResources @ 0x14055B95C (PnpNeedToReleaseBootResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400B0050 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall PnpIsRangeWithin(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2)
{
  unsigned int v2; // ebp
  ULONGLONG Vector; // rsi
  unsigned __int64 LowPart; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  ULONGLONG v10; // rax
  ULONGLONG v11; // rax
  unsigned __int64 Start; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  switch ( a1->Type )
  {
    case 1u:
      goto LABEL_13;
    case 2u:
      Vector = a1->u.Interrupt.Vector;
      LowPart = a2->u.Interrupt.Vector;
LABEL_4:
      v7 = Vector;
      v8 = LowPart;
LABEL_5:
      if ( Vector > LowPart || v7 < v8 )
        return v2;
      break;
    case 3u:
      goto LABEL_13;
    case 4u:
      Vector = a1->u.Generic.Start.LowPart;
      LowPart = a2->u.Generic.Start.LowPart;
      goto LABEL_4;
    case 6u:
      v7 = a1->u.Generic.Start.LowPart;
      Vector = (unsigned int)(v7 + a1->u.Generic.Start.HighPart - 1);
      v8 = a2->u.Generic.Start.LowPart;
      LowPart = (unsigned int)(v8 + a2->u.Generic.Start.HighPart - 1);
      goto LABEL_5;
    case 7u:
LABEL_13:
      v10 = RtlCmDecodeMemIoResource(a1, &Start);
      v7 = Start;
      Vector = v10 + Start - 1;
      v11 = RtlCmDecodeMemIoResource(a2, &Start);
      v8 = Start;
      LowPart = Start + v11 - 1;
      goto LABEL_5;
  }
  if ( a1->ShareDisposition == a2->ShareDisposition && a1->Flags == a2->Flags )
    return 1;
  return v2;
}
