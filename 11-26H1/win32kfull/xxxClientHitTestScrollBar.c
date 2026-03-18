/*
 * XREFs of xxxClientHitTestScrollBar @ 0x14028C0BC
 * Callers:
 *     xxxFindNCHitEx @ 0x14018DE2C (xxxFindNCHitEx.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientHitTestScrollBar(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  __int64 v7; // [rsp+44h] [rbp-14h]
  int v8; // [rsp+4Ch] [rbp-Ch]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v10 = 0;
  v8 = 0;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v11);
  EtwTraceBeginCallback(138LL);
  v3 = KeUserModeCallback(138LL, &v5, 24LL, &Src, &v10);
  EtwTraceEndCallback(138LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v11);
  if ( v3 < 0 || v10 != 24 )
    return 0LL;
  v11 = 0LL;
  RtlCopyFromUser(&v11, Src, 8uLL);
  result = v11;
  v12 = v11;
  return result;
}
