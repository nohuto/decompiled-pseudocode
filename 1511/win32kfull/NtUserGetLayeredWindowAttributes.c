/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C021AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetLayeredWindowAttributes @ 0x1C01E7D50 (_GetLayeredWindowAttributes.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int LayeredWindowAttributes; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  BYTE v14[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v16[6]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0;
  v14[0] = 0;
  v16[0] = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_2;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(v9 + 288) & 0x20) != 0 )
  {
    UserSetLastError(87);
LABEL_2:
    LayeredWindowAttributes = 0;
    goto LABEL_19;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v9, &v15, v14, v16);
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = v15;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_BYTE *)W32UserProbeAddress;
      *a3 = v14[0];
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      *a4 = v16[0] & 3;
    }
  }
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v12, v11);
  return LayeredWindowAttributes;
}
