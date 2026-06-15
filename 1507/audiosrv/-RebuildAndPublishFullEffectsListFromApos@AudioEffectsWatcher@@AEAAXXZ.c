/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800765D4
 * Callers:
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180075F50 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180076120 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18006AF90 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800768F8 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 */

void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  int v1; // ebp
  char *v3; // rbx
  _DWORD *v4; // r15
  int v5; // r12d
  __int64 v6; // rdi
  __int64 *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // eax
  void *v10; // rdi
  SIZE_T v11; // rsi
  unsigned __int64 v12; // rbx
  void *v13; // rax
  unsigned __int64 v14; // rax
  char *v15; // rsi
  _DWORD *v16; // rbx
  int v17; // edi
  LPVOID *v18; // rbx
  __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v19 = 0LL;
  memset_0(v20, 0, 0x28uLL);
  v3 = (char *)this + 112;
  do
  {
    ResetEvent(*((HANDLE *)this + 23));
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 52) = 0;
    v4 = v20;
    v5 = 0;
    v6 = 0LL;
    v7 = (__int64 *)v3;
    do
    {
      CoTaskMemFree(*((LPVOID *)v4 - 1));
      v8 = *v7;
      *((_QWORD *)v4 - 1) = 0LL;
      *v4 = 0;
      if ( v8
        && (*(int (__fastcall **)(__int64, __int64 *, _OWORD *, _QWORD))(*(_QWORD *)v8 + 24LL))(
             v8,
             &v19 + 2 * v6,
             &v20[v6],
             *((_QWORD *)this + 23)) < 0 )
      {
        *v4 = 0;
      }
      ++v5;
      *((_DWORD *)this + 52) += *v4;
      v7 += 4;
      v6 = v5;
      v4 += 4;
    }
    while ( (unsigned __int64)v5 < 3 );
    v3 = (char *)this + 112;
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 23), 0) );
  v9 = *((_DWORD *)this + 52);
  if ( !v9 )
    goto LABEL_16;
  v10 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  v11 = 16LL * v9;
  if ( is_mul_ok(v9, 0x10uLL) )
  {
    v12 = 0LL;
    if ( v10 )
    {
      v12 = CTCoAllocPolicy::_CoTaskMemSize(v10);
      if ( v11 < v12 )
        v12 = v11;
    }
    v13 = CoTaskMemRealloc(v10, v11);
    *((_QWORD *)this + 25) = v13;
    if ( v13 )
    {
      v14 = CTCoAllocPolicy::_CoTaskMemSize(v13);
      if ( v14 > v12 )
        memset_0((void *)(v12 + *((_QWORD *)this + 25)), 0, v14 - v12);
LABEL_16:
      v15 = (char *)*((_QWORD *)this + 25);
      v16 = v20;
      v17 = 0;
      do
      {
        if ( *v16 )
        {
          memcpy_0(v15, *((const void **)v16 - 1), 16LL * (unsigned int)*v16);
          v15 += 16 * (unsigned int)*v16;
        }
        ++v17;
        v16 += 4;
      }
      while ( (unsigned __int64)v17 < 3 );
      RtlPublishWnfStateData(
        *(_QWORD *)((char *)this + 76),
        0LL,
        *((_QWORD *)this + 25),
        (unsigned int)(16 * *((_DWORD *)this + 52)),
        0LL);
    }
  }
  v18 = (LPVOID *)&v19;
  do
  {
    CoTaskMemFree(*v18);
    ++v1;
    v18 += 2;
  }
  while ( (unsigned __int64)v1 < 3 );
}
