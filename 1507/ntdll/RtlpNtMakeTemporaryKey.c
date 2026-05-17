/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x1800EA2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return NtDeleteKey();
}
