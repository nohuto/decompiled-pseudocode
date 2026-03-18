/*
 * XREFs of ClientImmLoadLayout @ 0x140234C18
 * Callers:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140234B0C (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rcx
  void *v7; // rbx
  _OWORD *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-1A0h] BYREF
  void *Src; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v15[360]; // [rsp+68h] [rbp-170h] BYREF

  Src = 0LL;
  v11 = 0;
  v14[0] = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(92LL);
  v3 = KeUserModeCallback(92LL, v14, 8LL, &Src, &v11);
  EtwTraceEndCallback(92LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( v3 >= 0 && v11 == 24 )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, Src, 8uLL);
    v5 = v12;
    v14[1] = v12;
    if ( !v12 )
      return v5;
    v6 = *((_QWORD *)PtiCurrent(v4) + 68);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(_OWORD **)(v6 + 96) != a2 )
    {
      v7 = (void *)*((_QWORD *)Src + 2);
      memset_0(v15, 0, 0x160uLL);
      RtlCopyFromUser(v15, v7, 0x160uLL);
      v8 = v15;
      v9 = 2LL;
      do
      {
        *a2 = *v8;
        a2[1] = v8[1];
        a2[2] = v8[2];
        a2[3] = v8[3];
        a2[4] = v8[4];
        a2[5] = v8[5];
        a2[6] = v8[6];
        a2 += 8;
        *(a2 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      *a2 = *v8;
      a2[1] = v8[1];
      a2[2] = v8[2];
      a2[3] = v8[3];
      a2[4] = v8[4];
      a2[5] = v8[5];
      return v5;
    }
  }
  return 0LL;
}
