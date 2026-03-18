/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x14051C77C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x14051C950 (ExGetAttachedSessionPoolTagInfo.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionPoolTagInformation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int AttachedSessionPoolTagInfo; // ebx
  _QWORD *v5; // r14
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int SessionId; // eax
  int v11; // r15d
  struct _KPROCESS *NextSession; // rdi
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-90h] BYREF
  struct _MDL *v18; // [rsp+40h] [rbp-88h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-80h]
  _BYTE v20[48]; // [rsp+50h] [rbp-78h] BYREF

  AttachedSessionPoolTagInfo = 0;
  v19 = a3;
  *a3 = 0;
  v5 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a2 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = ExLockUserBuffer(a1, a2, a3, 1LL, &v17, &v18);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v5 = v17;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v17, v8, v7, SessionId);
    if ( AttachedSessionPoolTagInfo >= 0 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v11 = 0;
  NextSession = (struct _KPROCESS *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v13 = v17;
  while ( 1 )
  {
    v14 = MmGetSessionIdEx(NextSession);
    v15 = v14;
    if ( *a4 != -1 && *a4 != v14 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession(NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v13, v8, &v16, v15);
    MmDetachSession((__int64)NextSession, (struct _KTHREAD *)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_31;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v16 > v8 || v16 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v16);
    v8 -= v16;
LABEL_12:
    v11 += v16;
    if ( *a4 != -1 )
      goto LABEL_31;
LABEL_13:
    NextSession = (struct _KPROCESS *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_31:
  ObfDereferenceObject(NextSession);
LABEL_14:
  *v19 = v11;
LABEL_15:
  if ( AttachedSessionPoolTagInfo >= 0 && v5 )
    *v5 = 0LL;
LABEL_18:
  if ( v18 )
    ExUnlockUserBuffer(v18);
  return (unsigned int)AttachedSessionPoolTagInfo;
}
