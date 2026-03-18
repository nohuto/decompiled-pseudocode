/*
 * XREFs of NtUserGetLatestInputMessageData @ 0x1402B3E10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetLatestInputMessageData(void *a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int128 Src; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int128 v9; // [rsp+60h] [rbp-88h]
  __int128 v10; // [rsp+70h] [rbp-78h]
  __int64 v11; // [rsp+80h] [rbp-68h]
  _OWORD v12[4]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v13; // [rsp+D0h] [rbp-18h]

  memset_0(&Src, 0, 0x48uLL);
  v2 = 0;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 )
    {
      memset_0(v12, 0, 0x48uLL);
      RtlCopyFromUser(v12, a1, 0x48uLL);
      Src = v12[0];
      v8 = v12[1];
      v9 = v12[2];
      v10 = v12[3];
      v11 = v13;
      if ( LODWORD(v12[0]) == 72 )
      {
        v5 = PtiCurrent(v4);
        Src = *(_OWORD *)((char *)v5 + 1384);
        v8 = *(_OWORD *)((char *)v5 + 1400);
        v9 = *(_OWORD *)((char *)v5 + 1416);
        v10 = *(_OWORD *)((char *)v5 + 1432);
        v11 = *((_QWORD *)v5 + 181);
        RtlCopyToUser(a1, &Src, 0x48uLL);
        return 1;
      }
    }
    v3 = 87;
  }
  else
  {
    v3 = 5023;
  }
  UserSetLastError(v3);
  return v2;
}
