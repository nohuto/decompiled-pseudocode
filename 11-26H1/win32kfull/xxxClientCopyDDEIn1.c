/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1402591EC
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402CD36C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x140258FE8 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     IntToULongLong @ 0x1402D5134 (IntToULongLong.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rbx
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm1
  INT v12; // r14d
  __int128 v13; // xmm4
  __int64 v14; // xmm5_8
  ULONGLONG v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  size_t v18; // rbx
  int v20; // [rsp+38h] [rbp-130h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-128h] BYREF
  void *Src; // [rsp+58h] [rbp-110h] BYREF
  __int64 v23; // [rsp+60h] [rbp-108h]
  ULONGLONG v24; // [rsp+68h] [rbp-100h] BYREF
  ULONGLONG pullResult[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-E8h] BYREF
  int v27; // [rsp+88h] [rbp-E0h]
  int v28; // [rsp+8Ch] [rbp-DCh]
  __int128 v29; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-C8h]
  volatile void *Address[2]; // [rsp+B0h] [rbp-B8h]
  volatile void *v32[2]; // [rsp+C0h] [rbp-A8h]
  INT iOperand[6]; // [rsp+D0h] [rbp-98h]
  _QWORD v34[3]; // [rsp+E8h] [rbp-80h] BYREF
  _OWORD v35[4]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v36; // [rsp+140h] [rbp-28h]

  pullResult[1] = (ULONGLONG)a3;
  v23 = 0LL;
  pullResult[0] = 0LL;
  v24 = 0LL;
  Src = 0LL;
  v20 = 0;
  v28 = 0;
  v4 = 0;
  *a3 = 0LL;
  v26 = a1;
  v27 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v21);
  EtwTraceBeginCallback(60LL);
  v5 = KeUserModeCallback(60LL, &v26, 16LL, &Src, &v20);
  EtwTraceEndCallback(60LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v21);
  if ( v5 >= 0 && v20 == 24 )
  {
    v21[0] = 0LL;
    RtlCopyFromUser(v21, Src, 8uLL);
    v4 = v21[0];
    if ( v21[0] == 2LL )
    {
      v4 = 0;
      v7 = *((_QWORD *)PtiCurrent(v6) + 68);
      if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != v35 )
      {
        v8 = (void *)*((_QWORD *)Src + 2);
        memset_0(&v29, 0, 0x48uLL);
        RtlCopyFromUser(&v29, v8, 0x48uLL);
        v9 = v29;
        v35[0] = v29;
        v10 = v30;
        v35[1] = v30;
        v11 = *(_OWORD *)Address;
        v35[2] = *(_OWORD *)Address;
        v35[3] = *(_OWORD *)v32;
        v36 = *(_QWORD *)iOperand;
        v4 = 2;
        v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Address, 8));
        if ( IntToULongLong(v12, pullResult) < 0
          || IntToULongLong(iOperand[0], &v24) < 0
          || (v15 = pullResult[0] + v24, pullResult[0] + v24 < pullResult[0])
          || (v16 = v15 + 72, v15 + 72 < 0x48) )
        {
          v17 = 0LL;
          v23 = 0LL;
        }
        else
        {
          if ( v16 < 0x90 )
            v16 = 144LL;
          v17 = Win32AllocPoolZInit(v16, 1164211029LL);
          v23 = v17;
          v11 = *(_OWORD *)Address;
          v9 = v29;
          v10 = v30;
          v13 = *(_OWORD *)v32;
          v14 = *(_QWORD *)iOperand;
        }
        if ( v17 )
        {
          *a3 = v17;
          *(_OWORD *)v17 = v9;
          *(_OWORD *)(v17 + 16) = v10;
          *(_OWORD *)(v17 + 32) = v11;
          *(_OWORD *)(v17 + 48) = v13;
          *(_QWORD *)(v17 + 64) = v14;
          if ( v12 )
          {
            ProbeForRead(Address[0], v12, 1u);
            memmove((void *)(v17 + 72), (const void *)Address[0], v12);
          }
          if ( iOperand[0] )
          {
            v18 = iOperand[0];
            ProbeForRead(v32[1], iOperand[0], 1u);
            memmove((void *)(v17 + v12 + 72LL), (const void *)v32[1], v18);
          }
          Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
            v34,
            v17,
            (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v17);
          Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v34);
        }
        else
        {
          return 3;
        }
      }
    }
  }
  return v4;
}
