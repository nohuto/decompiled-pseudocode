/*
 * XREFs of PepParkPreference @ 0x1C0004BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int v10; // r14d
  int v11; // r8d
  __int64 v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rdx
  char *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE *v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  char v23; // [rsp+58h] [rbp-8h]

  result = (unsigned int)dword_1C0009870;
  if ( dword_1C0009870 >= (unsigned int)dword_1C00093A4 )
  {
    result = KeCountSetBitsAffinityEx(a4);
    v10 = result;
    if ( (_DWORD)result )
    {
      result = a5 ? KeCountSetBitsAffinityEx(a5) : 0LL;
      if ( a3 > (unsigned int)result && a3 < v10 )
      {
        v11 = v10;
        if ( v10 < 4 )
          v11 = 4;
        memset(PepParkLists, 0, (unsigned int)(16 * v11));
        v12 = 0LL;
        v13 = 0;
        KeInitializeEnumerationContext(v19, a4);
        result = KeEnumerateNextProcessor(&v18, v19);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v10 )
              break;
            v14 = v18;
            v15 = &PepParkLists[16 * v13];
            v12 = *(_QWORD *)(DevExts + 8LL * v18);
            *(_QWORD *)v15 = *(_QWORD *)(v12 + 1048);
            v15[9] = 0;
            if ( a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v14) )
            {
              v15[8] = 2;
              if ( a3 )
                --a3;
            }
            else
            {
              v15[8] = 0;
            }
            ++v13;
            result = KeEnumerateNextProcessor(&v18, v19);
          }
          while ( !(_DWORD)result );
          if ( v13 )
          {
            if ( v12 )
            {
              v23 = a1;
              v22 = a2;
              v20[0] = a3;
              v20[1] = v13;
              v21 = PepParkLists;
              result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C0009608)(*(_QWORD *)(v12 + 1048), v20);
              if ( (int)result >= 0 )
              {
                v16 = 0;
                KeInitializeEnumerationContext(v19, a4);
                while ( 1 )
                {
                  result = KeEnumerateNextProcessor(&v18, v19);
                  if ( (_DWORD)result || v16 >= v10 )
                    return result;
                  if ( PepParkLists[16 * v16 + 9] == 1 )
                  {
                    v17 = a6;
                  }
                  else
                  {
                    if ( PepParkLists[16 * v16 + 9] != 2 )
                      goto LABEL_28;
                    v17 = a7;
                  }
                  KeAddProcessorAffinityEx(v17, v18);
LABEL_28:
                  ++v16;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
