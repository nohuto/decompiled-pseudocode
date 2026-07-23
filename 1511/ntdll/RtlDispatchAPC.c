/*
 * XREFs of RtlDispatchAPC @ 0x180081AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall RtlDispatchAPC(void (__fastcall *HashTable)(__int64), __int64 a2, _ACTIVATION_CONTEXT *a3)
{
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  _BYTE v8[56]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 72LL;
  v7 = 1;
  memset(v8, 0, sizeof(v8));
  if ( a3 == (_ACTIVATION_CONTEXT *)-1LL )
  {
    HashTable(a2);
  }
  else
  {
    RtlActivateActivationContextUnsafeFast((__int64)&v6, (__int64)a3);
    HashTable(a2);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v6);
    RtlReleaseActivationContext(a3);
  }
}
