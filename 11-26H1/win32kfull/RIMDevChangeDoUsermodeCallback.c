/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x140222A4C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientRimDevCallback @ 0x140222CB8 (xxxClientRimDevCallback.c)
 */

struct tagTHREADINFO *__fastcall RIMDevChangeDoUsermodeCallback(__int64 a1)
{
  struct tagTHREADINFO *result; // rax
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int16 v10; // dx
  __int16 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (struct tagTHREADINFO *)&retaddr;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v2 + 392);
  if ( *(_DWORD *)(v2 + 120) != 3 )
  {
    result = PtiCurrent(a1);
    if ( result )
    {
      result = PtiCurrent(v5);
      if ( result )
      {
        v7 = *(struct tagTHREADINFO **)(v4 + 32);
        result = (struct tagTHREADINFO *)PsGetCurrentProcess(v6);
        if ( v7 == result )
        {
          if ( *(_QWORD *)(v4 + 832) )
          {
            *(_BYTE *)(v4 + 82) = 1;
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
              RIMUnlockExclusive(v4 + 760);
            RIMUnlockExclusive(v4 + 104);
            RawInputManagerDeviceObjectReference(v2);
            v9 = PtiCurrent(v8);
            v10 = 0;
            v11 = 0;
            *((_QWORD *)v9 + 192) = v2;
            if ( *(_DWORD *)(v2 + 120) == 2 )
            {
              v12 = *(_QWORD *)(v2 + 512);
              if ( v12 )
              {
                v10 = *(_WORD *)(v12 + 40);
                v11 = *(_WORD *)(v12 + 42);
              }
            }
            v13 = *(_QWORD *)(v2 + 88);
            if ( (*(_DWORD *)(v2 + 240) & 0x2000) != 0 )
            {
              if ( *(_DWORD *)a1 == 1 )
              {
                *(_DWORD *)a1 = 2;
              }
              else if ( *(_DWORD *)a1 == 4 )
              {
                *(_DWORD *)a1 = 3;
              }
              v15 = *(_DWORD *)(v2 + 240);
              if ( (v15 & 0x80000) != 0 || (v15 & 0x100000) != 0 )
                v13 = *(_QWORD *)(v2 + 400);
            }
            xxxClientRimDevCallback(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 4),
              *(_DWORD *)(a1 + 8),
              *(_QWORD *)(v4 + 72),
              v13,
              v10,
              v11,
              *(_QWORD *)(v4 + 400),
              *(_QWORD *)(v4 + 832));
            *((_QWORD *)PtiCurrent(v14) + 192) = 0LL;
            RIMLockExclusive(v4 + 104);
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
              RIMLockExclusive(v4 + 760);
            *(_BYTE *)(v4 + 82) = 0;
            RIMSignalAllDispositionWaiters(v4);
            if ( (*(_DWORD *)(v2 + 256) & 0x80u) != 0 || (*(_DWORD *)(v2 + 240) & 0x2000) != 0 )
            {
              if ( *(_DWORD *)a1 == 2 )
                *(_DWORD *)(v2 + 240) |= 0x1000000u;
              if ( *(_DWORD *)a1 == 3 )
                *(_DWORD *)(v2 + 240) |= 0x2000000u;
            }
            return (struct tagTHREADINFO *)RawInputManagerDeviceObjectDereference(v2);
          }
        }
      }
    }
  }
  return result;
}
