/*
 * XREFs of SetDisplayAffinity @ 0x1C0239428
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C0220B40 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0239164 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C02393E4 (GetDisplayAffinity.c)
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
      InternalRemoveProp((__int64)a1, atomDispAffinity, 1);
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
