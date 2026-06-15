/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18001C308
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180038FA4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033BD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int16 *v6; // rax
  int v7; // ebx
  BOOL v8; // eax
  struct _TP_TIMER *(__fastcall *v9)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rsi
  struct _TP_TIMER *Timer; // rax
  signed int LastError; // eax
  unsigned __int16 **v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+30h] [rbp-28h]

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  v5 = v2 + 1;
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 + 1 < v2 )
    return (unsigned int)-2147024362;
  *((_QWORD *)this + 2) = 0LL;
  if ( is_mul_ok(v5, 2uLL) )
  {
    v6 = (unsigned __int16 *)CoTaskMemAlloc(2 * v5);
    *((_QWORD *)this + 2) = v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
    v7 = 0;
    StringCchCopyNExW(v6, v2 + 1, a2, v2, v13, v14, v15);
  }
  else
  {
    v7 = -2147024362;
  }
  if ( v7 >= 0 )
  {
    v8 = *a2 != 0;
    *((_DWORD *)this + 124) = v8;
    if ( !v8 )
    {
      *((_DWORD *)this + 28) = 1;
      *((_DWORD *)this + 30) = 2;
      *((_DWORD *)this + 57) = 2;
      *((_DWORD *)this + 58) = 2;
    }
    v9 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
    if ( v9 == CAudioThreadPool::CreateTimer )
      Timer = CAudioThreadPool::CreateTimer(
                ThreadPool,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::SoundLevelChangeCompletionCallback,
                this);
    else
      Timer = v9(
                ThreadPool,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::SoundLevelChangeCompletionCallback,
                this);
    *((_QWORD *)this + 21) = Timer;
    if ( Timer )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
    }
  }
  return (unsigned int)v7;
}
