/*
 * XREFs of NtUserCheckMenuItem @ 0x1C0093980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00955A8 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  char v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(1LL);
  v12 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v12);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v6 = ValidateHmenu(a1);
    v8 = v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 40) & 0x40) == 0 )
      {
        v9 = MNLookUpItem(v6, a2, a3 & 0x400, 0LL);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 4) & 8;
          *(_DWORD *)(v9 + 4) ^= ((unsigned __int8)a3 ^ *(_BYTE *)(v9 + 4) & 8) & 8;
          goto LABEL_6;
        }
      }
    }
  }
  v10 = -1;
LABEL_6:
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v10;
}
