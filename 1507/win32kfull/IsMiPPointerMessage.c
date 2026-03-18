/*
 * XREFs of IsMiPPointerMessage @ 0x1C000827C
 * Callers:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 */

__int64 __fastcall IsMiPPointerMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // r8d

  v3 = IsPointerInputMessage(a1, a2, a3, (unsigned int)a1);
  v6 = 0;
  if ( v3 )
    goto LABEL_2;
  if ( v5 == 528 && (_WORD)v4 == 582 )
  {
    v4 >>= 16;
LABEL_2:
    LOBYTE(v6) = (_WORD)v4 == 1;
    return v6;
  }
  return 0LL;
}
