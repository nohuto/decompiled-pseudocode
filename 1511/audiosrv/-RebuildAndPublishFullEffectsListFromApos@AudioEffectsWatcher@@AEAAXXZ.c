/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x180030BAC
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800310D8 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800714C0 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 * Callees:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180069CA4 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
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
  unsigned __int64 v9; // rax
  char *v10; // rsi
  _DWORD *v11; // rbx
  int v12; // edi
  LPVOID *v13; // rbx
  void *v14; // rdi
  SIZE_T v15; // rsi
  unsigned __int64 v16; // rbx
  void *v17; // rax
  unsigned __int64 v18; // rax
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
  v9 = *((unsigned int *)this + 52);
  if ( !(_DWORD)v9 )
    goto LABEL_9;
  v14 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  v15 = 16 * v9;
  if ( is_mul_ok(v9, 0x10uLL) )
  {
    v16 = 0LL;
    if ( v14 )
    {
      v16 = CTCoAllocPolicy::_CoTaskMemSize(v14);
      if ( v15 < v16 )
        v16 = v15;
    }
    v17 = CoTaskMemRealloc(v14, v15);
    *((_QWORD *)this + 25) = v17;
    if ( v17 )
    {
      v18 = CTCoAllocPolicy::_CoTaskMemSize(v17);
      if ( v18 > v16 )
        memset_0((void *)(v16 + *((_QWORD *)this + 25)), 0, v18 - v16);
LABEL_9:
      v10 = (char *)*((_QWORD *)this + 25);
      v11 = v20;
      v12 = 0;
      do
      {
        if ( *v11 )
        {
          memcpy_0(v10, *((const void **)v11 - 1), 16LL * (unsigned int)*v11);
          v10 += 16 * (unsigned int)*v11;
        }
        ++v12;
        v11 += 4;
      }
      while ( (unsigned __int64)v12 < 3 );
      RtlPublishWnfStateData(
        *(_QWORD *)((char *)this + 76),
        0LL,
        *((_QWORD *)this + 25),
        (unsigned int)(16 * *((_DWORD *)this + 52)),
        0LL);
    }
  }
  v13 = (LPVOID *)&v19;
  do
  {
    CoTaskMemFree(*v13);
    ++v1;
    v13 += 2;
  }
  while ( (unsigned __int64)v1 < 3 );
}
