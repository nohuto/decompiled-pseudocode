/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800031B4
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18005A0A0 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 * Callees:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180003304 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800254B4 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  int v2; // ebx
  _DWORD *v3; // rsi
  int v4; // r14d
  __int64 *v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // r14
  _DWORD *v10; // rsi
  int v11; // ebp
  LPVOID *v12; // rdi
  void *v13; // r8
  SIZE_T v14; // rax
  unsigned __int64 v15; // kr00_8
  SIZE_T v16; // rsi
  void *v17; // rax
  unsigned __int64 v18; // rax
  _QWORD v19[6]; // [rsp+30h] [rbp-68h] BYREF

  memset(v19, 0, sizeof(v19));
  v2 = 0;
  do
  {
    ResetEvent(*((HANDLE *)this + 23));
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 52) = 0;
    v3 = &v19[1];
    v4 = 0;
    v5 = (__int64 *)((char *)this + 112);
    v6 = 0LL;
    do
    {
      CoTaskMemFree(*((LPVOID *)v3 - 1));
      v7 = *v5;
      *((_QWORD *)v3 - 1) = 0LL;
      *v3 = 0;
      if ( v7
        && (*(int (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD))(*(_QWORD *)v7 + 24LL))(
             v7,
             &v19[2 * v6],
             &v19[2 * v6 + 1],
             *((_QWORD *)this + 23)) < 0 )
      {
        *v3 = 0;
      }
      ++v4;
      *((_DWORD *)this + 52) += *v3;
      v5 += 4;
      v6 = v4;
      v3 += 4;
    }
    while ( (unsigned __int64)v4 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 23), 0) );
  v8 = *((unsigned int *)this + 52);
  if ( (_DWORD)v8 )
  {
    v13 = (void *)*((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    v15 = v8;
    v14 = 16 * v8;
    v16 = v14;
    if ( !is_mul_ok(v15, 0x10uLL) )
      goto LABEL_12;
    v17 = CoTaskMemRealloc(v13, v14);
    *((_QWORD *)this + 25) = v17;
    if ( !v17 )
      goto LABEL_12;
    v18 = CTCoAllocPolicy::_CoTaskMemSize(v17);
    if ( v18 > v16 )
      memset((void *)(v16 + *((_QWORD *)this + 25)), 0, v18 - v16);
  }
  v9 = (char *)*((_QWORD *)this + 25);
  v10 = &v19[1];
  v11 = 0;
  do
  {
    if ( *v10 )
    {
      memcpy_0(v9, *((const void **)v10 - 1), 16LL * (unsigned int)*v10);
      v9 += 16 * (unsigned int)*v10;
    }
    ++v11;
    v10 += 4;
  }
  while ( (unsigned __int64)v11 < 3 );
  RtlPublishWnfStateData(
    *(_QWORD *)((char *)this + 76),
    0LL,
    *((_QWORD *)this + 25),
    (unsigned int)(16 * *((_DWORD *)this + 52)),
    0LL);
LABEL_12:
  v12 = (LPVOID *)v19;
  do
  {
    CoTaskMemFree(*v12);
    ++v2;
    v12 += 2;
  }
  while ( (unsigned __int64)v2 < 3 );
}
