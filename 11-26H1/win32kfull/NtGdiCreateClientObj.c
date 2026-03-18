/*
 * XREFs of NtGdiCreateClientObj @ 0x140244B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NtGdiCreateClientObj(Gre::Base *a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbp
  void *Object; // rsi
  unsigned __int64 inserted; // rax
  __int64 v6; // rdx
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int16 *v9; // [rsp+40h] [rbp-18h]
  char v10; // [rsp+48h] [rbp-10h]

  v1 = 0LL;
  v2 = (unsigned int)a1;
  if ( ((unsigned int)a1 & 0xFF00FFFF) != 0
    || ((unsigned int)a1 & 0x600000) == 0
    || ((unsigned int)a1 & 0x1F0000) != 0x60000 )
  {
    return 0LL;
  }
  v3 = Gre::Base::Globals(a1);
  Object = AllocateObject(v3, 0x18u, 6u);
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    PushThreadGuardedObject(
      v8,
      v8,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v9 = 0LL;
    v10 = 0;
    inserted = (unsigned __int64)HmgInsertObjectInternal(v3, Object, 1u, 6u);
    if ( inserted )
    {
      v9 = (volatile signed __int16 *)Object;
      v1 = inserted | v2;
      HmgModifyHandleType(v1, v6);
    }
    else
    {
      v1 = 0LL;
      FreeObject(v3, Object, 6u);
    }
    if ( v9 )
    {
      if ( !v10 )
        _InterlockedDecrement16(v9 + 6);
    }
    PopThreadGuardedObject(v8);
  }
  return v1;
}
