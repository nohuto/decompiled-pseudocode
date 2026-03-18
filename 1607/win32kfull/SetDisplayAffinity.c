/*
 * XREFs of SetDisplayAffinity @ 0x1C0231484
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C021AAA0 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02311C4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0231440 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // esi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*((_BYTE *)a1 + 51) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v7) )
  {
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v3, 5) )
        return v2;
    }
    else
    {
      InternalRemoveProp();
    }
    v2 = 1;
    v5 = v3 & 1;
    if ( (v7 & 1) != v5 )
    {
      v2 = ChangeWindowTreeProtection(a1, v5);
      if ( !v2 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v7, 5);
    }
  }
  return v2;
}
