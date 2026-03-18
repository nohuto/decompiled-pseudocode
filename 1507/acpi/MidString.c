/*
 * XREFs of MidString @ 0x1C0048750
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall MidString(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"TII");
  if ( !v5 )
  {
    v5 = ValidateTarget(*(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v16);
    if ( !v5 )
    {
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 2LL);
      if ( (unsigned int)(v6 - 2) > 1 )
      {
        v5 = -1072431098;
        LogError(-1072431098);
        v11 = 107;
        goto LABEL_25;
      }
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v6;
      v7 = *(_QWORD *)(a2 + 80);
      v8 = *(unsigned int *)(v7 + 24);
      v9 = *(_QWORD *)(v7 + 56);
      if ( v9 < v8 )
      {
        if ( *(_QWORD *)(v7 + 96) + v9 < v8 )
          v12 = *(_QWORD *)(v7 + 96);
        else
          v12 = v8 - v9;
        if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
        {
          v13 = HeapAlloc(gpheapGlobal, 1381258056, v12 + 1);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( !v13 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            PrintDebugMessage(106, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v12 + 1;
        }
        else
        {
          v14 = HeapAlloc(gpheapGlobal, 1179992648, v12);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
          if ( !v14 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            PrintDebugMessage(105, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v12;
        }
        if ( !v5 )
        {
          if ( v12 )
          {
            do
            {
              *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                                   + *(_QWORD *)(*(_QWORD *)(a2 + 80)
                                                                                               + 32LL)
                                                                                   + v9);
              ++v4;
            }
            while ( v4 < v12 );
          }
          return (unsigned int)WriteObject(a1, v16, *(_QWORD *)(a2 + 88));
        }
      }
      else if ( *(_WORD *)(v7 + 2) == 2 )
      {
        v10 = HeapAlloc(gpheapGlobal, 1381258056, 1u);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v10;
        if ( !v10 )
        {
          v5 = -1073741670;
          LogError(-1073741670);
          v11 = 105;
LABEL_25:
          PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
          return v5;
        }
        **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
        return (unsigned int)WriteObject(a1, v16, *(_QWORD *)(a2 + 88));
      }
    }
  }
  return v5;
}
