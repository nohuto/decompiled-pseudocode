/*
 * XREFs of sub_1400037AC @ 0x1400037AC
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 * Callees:
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_14000478C @ 0x14000478C (sub_14000478C.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 */

_QWORD *__fastcall sub_1400037AC(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // r14d
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx

  v6 = (a2 >> 1) & 1;
  v8 = a1;
  result = (_QWORD *)sub_140004390(a1, v6, a4);
  v10 = *(_QWORD **)(a4 + 8);
  if ( v6 )
  {
    while ( (_QWORD *)*v10 == v10 )
      result = (_QWORD *)RtlSleepConditionVariableSRW(&unk_14001FC10, v10 + 2, 0LL, 1LL);
  }
  else
  {
LABEL_2:
    for ( result = (_QWORD *)*v10; result != v10; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == v8 )
      {
        v11 = (volatile signed __int32 *)(result - 9);
        if ( result != (_QWORD *)72 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) == 0 || (v11[2] & 1) != 0 )
            {
              if ( !(unsigned int)sub_14000478C(v11) )
              {
                _InterlockedIncrement(v11);
                sub_140012F08(v12, 0LL, a4);
                if ( (v11[2] & 4) != 0 )
                {
                  sub_1400046B4((PVOID)v11);
                  goto LABEL_2;
                }
                sub_1400046B4((PVOID)v11);
              }
              v13 = v11 + 18;
              result = (_QWORD *)*((_QWORD *)v11 + 9);
              if ( a3 )
              {
                _InterlockedOr(v11 + 2, 4u);
                v14 = *v13;
                v15 = (_QWORD *)*((_QWORD *)v11 + 10);
                if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                v16 = *(_QWORD **)(a3 + 8);
                *v13 = a3;
                *((_QWORD *)v11 + 10) = v16;
                if ( *v16 != a3 )
                  __fastfail(3u);
                *v16 = v13;
                *(_QWORD *)(a3 + 8) = v13;
              }
            }
            else
            {
              result = (_QWORD *)*result;
            }
            if ( result != v10 )
            {
              v11 = (volatile signed __int32 *)(result - 9);
              if ( *((_DWORD *)result - 2) == v8 )
                continue;
            }
            return result;
          }
        }
        return result;
      }
    }
  }
  return result;
}
