/*
 * XREFs of PsUpdateComponentPower @ 0x1400ADE44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  __int16 v10; // dx
  __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a1 )
    a1 = PsInitialSystemProcess;
  v3 = a1[2].ActiveProcessors.Bitmap[13];
  if ( v3 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
              {
                if ( *(_WORD *)(v3 + 104) )
                {
                  v9 = MEMORY[0xFFFFF78000000014];
                  v10 = *(_WORD *)(v3 + 104);
                  if ( (v10 & 1) != 0 )
                  {
                    *(_QWORD *)(v3 + 136) += MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 128);
                    *(_WORD *)(v3 + 104) = v10 & 0xFFFE;
                  }
                  v11 = *(_WORD *)(v3 + 104);
                  if ( (v11 & 2) != 0 )
                  {
                    *(_QWORD *)(v3 + 120) += v9 - *(_QWORD *)(v3 + 112);
                    *(_WORD *)(v3 + 104) = v11 & 0xFFFD;
                  }
                }
              }
              else
              {
                *(_WORD *)(v3 + 106) += a3;
                *(_WORD *)(v3 + 108) += WORD1(a3);
                *(_WORD *)(v3 + 110) += WORD2(a3);
              }
            }
            else
            {
              v12 = MEMORY[0xFFFFF78000000014];
              if ( (_DWORD)a3 )
              {
                *(_WORD *)(v3 + 104) |= 2u;
              }
              else
              {
                *(_QWORD *)(v3 + 120) += MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 112);
                *(_WORD *)(v3 + 104) &= ~2u;
              }
              *(_QWORD *)(v3 + 112) = v12;
            }
          }
          else
          {
            v13 = MEMORY[0xFFFFF78000000014];
            if ( (_DWORD)a3 )
            {
              *(_WORD *)(v3 + 104) |= 1u;
            }
            else
            {
              *(_QWORD *)(v3 + 136) += MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 128);
              *(_WORD *)(v3 + 104) &= ~1u;
            }
            *(_QWORD *)(v3 + 128) = v13;
          }
        }
        else if ( a3 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 80), HIDWORD(a3));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 96), (unsigned int)a3);
        }
      }
      else if ( a3 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 72), HIDWORD(a3));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 88), (unsigned int)a3);
      }
    }
    else if ( a3 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 64), a3);
    }
  }
}
