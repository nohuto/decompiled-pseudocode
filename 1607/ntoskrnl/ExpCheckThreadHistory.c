/*
 * XREFs of ExpCheckThreadHistory @ 0x1400F70DC
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall ExpCheckThreadHistory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // dl
  char v4; // r10
  char i; // r9
  struct _KTHREAD *v6; // rcx
  int v7; // ebx
  char v9; // r8
  struct _KTHREAD *Object; // rbx
  __int64 v11; // rax
  char v12; // r9
  char v13; // r8
  char v14; // r11
  _QWORD v15[4]; // [rsp+0h] [rbp-38h]

  if ( (*(_DWORD *)(a1 + 152) & 7) == 4 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v6 = *(struct _KTHREAD **)(a1 + 8LL * i + 72);
    if ( v6 )
    {
      if ( v6 != CurrentThread && v6->WaitBlockFill6[68] == 5 )
      {
        v9 = v6->WaitRegister.Flags & 7;
        if ( (v9 == 1 || v9 == 4) && v6->WaitBlockCount == 1 )
        {
          Object = (struct _KTHREAD *)v6->WaitBlock[0].Object;
          if ( Object != *(struct _KTHREAD **)(*(_QWORD *)(a1 + 16) + 8LL) )
          {
            if ( v9 == 4 || Object == (struct _KTHREAD *)&v6->SuspendEvent )
              return 1;
            v11 = v4++;
            v15[v11] = Object;
          }
        }
      }
    }
  }
  v7 = v4 - 3;
  if ( v7 < 0 )
    return 0;
  while ( 1 )
  {
    v12 = v3 + 1;
    v13 = 1;
    v14 = v3 + 1;
    if ( v4 - (char)(v3 + 1) >= 2 )
      break;
LABEL_19:
    ++v3;
    if ( v12 > v7 )
      return 0;
  }
  while ( v15[v3] != v15[v14] || ++v13 < 3 )
  {
    if ( 3 - v13 > v4 - ++v14 )
      goto LABEL_19;
  }
  return 1;
}
