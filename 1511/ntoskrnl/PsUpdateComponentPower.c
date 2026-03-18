/*
 * XREFs of PsUpdateComponentPower @ 0x1400EF440
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
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax

  if ( !a1 )
    a1 = PsInitialSystemProcess;
  v3 = a1[2].ActiveProcessors.Bitmap[11];
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
          if ( v6 != 1 )
          {
            if ( a1 == PsInitialSystemProcess )
              return;
            if ( (_DWORD)a3 )
            {
              v7 = MEMORY[0xFFFFF78000000014];
              v8 = *(unsigned int *)(v3 + 108);
              if ( (_DWORD)v8 )
              {
                if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 112)) > 0 )
                  *(_QWORD *)(v3 + 120) += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 112)) * v8;
              }
              *(_DWORD *)(v3 + 108) = a3;
            }
            else
            {
              if ( !*(_DWORD *)(v3 + 108) )
                return;
              v7 = MEMORY[0xFFFFF78000000014];
              if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 112)) > 0 )
                *(_QWORD *)(v3 + 120) += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 112))
                                       * *(unsigned int *)(v3 + 108);
              *(_DWORD *)(v3 + 108) = 0;
            }
            *(_QWORD *)(v3 + 112) = v7;
            return;
          }
          if ( a1 != PsInitialSystemProcess )
          {
            v9 = *(_DWORD *)(v3 + 104);
            if ( (_DWORD)a3 )
            {
              if ( (v9 & 1) != 0 )
                return;
              *(_DWORD *)(v3 + 104) = v9 | 1;
              v10 = MEMORY[0xFFFFF78000000014];
            }
            else
            {
              if ( (v9 & 1) == 0 )
                return;
              v10 = MEMORY[0xFFFFF78000000014];
              if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 128)) > 0 )
                *(_QWORD *)(v3 + 136) += MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v3 + 128);
              *(_DWORD *)(v3 + 104) &= ~1u;
            }
            *(_QWORD *)(v3 + 128) = v10;
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
