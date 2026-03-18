/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x140142138
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // r8

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
