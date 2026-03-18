/*
 * XREFs of xxxClientCopyImage @ 0x1401529AC
 * Callers:
 *     xxxCreateWindowSmIcon @ 0x140093E5C (xxxCreateWindowSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x140152004 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]
  int v12; // [rsp+58h] [rbp-10h]
  int v13; // [rsp+5Ch] [rbp-Ch]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF

  Src = 0LL;
  v15 = 0;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v8);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v9, 24LL, &Src, &v15);
  EtwTraceEndCallback(64LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v8);
  if ( v6 < 0 || v15 != 24 )
    return 0LL;
  v8[0] = 0LL;
  RtlCopyFromUser(v8, Src, 8uLL);
  result = v8[0];
  v8[1] = v8[0];
  if ( v8[0] )
  {
    if ( a2 )
      return HMValidateHandleNoRip(v8[0], 3);
  }
  return result;
}
