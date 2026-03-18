/*
 * XREFs of ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C00F5078
 * Callers:
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00F5B10 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 * Callees:
 *     ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C00F589C (--$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMA.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00F8180 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CitBaseUseDataValidate<CIT_PERSISTED_SYSTEM_DATA>(
        CIT_DATA_READER *this,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v6; // edi
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // r11
  unsigned int *v12; // r11
  __int64 v13; // rbx
  unsigned int v14; // r9d
  int v15; // ebp
  __int64 v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // r11d
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h]

  v21 = 0;
  v6 = a3[1];
  if ( v6 && (v9 = a3[3]) != 0 && (v10 = a3[5]) != 0 )
  {
    if ( CIT_DATA_READER::ValidateRange(this, a3[2], v9, 4u) )
    {
      if ( CIT_DATA_READER::ValidateRange(this, *(_DWORD *)(v11 + 16), v10, 2u) )
      {
        if ( (unsigned __int8)CIT_DATA_READER::ValidateRange<_CIT_PERSISTED_BITMAP const>(this, &v20, v6, *v12, v6) )
        {
          v13 = 0LL;
          v14 = 1;
          if ( !(v21 >> 3) )
            return v14;
          v15 = *(_DWORD *)(a2 + 72);
          v16 = v20;
          while ( 1 )
          {
            v17 = *(_DWORD *)(v16 + 8 * v13 + 4);
            if ( v17 != v15 )
              break;
            if ( !CIT_DATA_READER::ValidateRange(this, *(_DWORD *)(v16 + 8 * v13), v17, v14) )
            {
              if ( a5 )
                *a5 = 5600;
              return 0;
            }
            v13 = v14 + (unsigned int)v13;
            if ( (unsigned int)v13 >= v18 )
              return v14;
          }
          if ( a5 )
            *a5 = 5500;
        }
        else if ( a5 )
        {
          *a5 = 5400;
        }
      }
      else if ( a5 )
      {
        *a5 = 5300;
      }
    }
    else if ( a5 )
    {
      *a5 = 5200;
    }
  }
  else if ( a5 )
  {
    *a5 = 5100;
  }
  return 0;
}
