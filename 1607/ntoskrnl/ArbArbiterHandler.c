/*
 * XREFs of ArbArbiterHandler @ 0x14055857C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // edi
  struct _KEVENT *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KEVENT *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_5;
    }
    if ( a2 == 7 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_5;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_5;
      }
      goto LABEL_22;
    }
LABEL_23:
    v8 = -1073741822;
    goto LABEL_9;
  }
  if ( a2 >= 4 )
    goto LABEL_23;
  if ( !a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    goto LABEL_5;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
      goto LABEL_5;
    }
    if ( a2 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_5;
    }
LABEL_22:
    v8 = -1073741811;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
LABEL_5:
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v14 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 1;
      KeResetEvent(v14);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 0;
      KeSetEvent(v9, 0, 0);
    }
  }
LABEL_9:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v8;
}
