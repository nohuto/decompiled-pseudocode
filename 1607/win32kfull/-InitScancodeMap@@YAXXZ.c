/*
 * XREFs of ?InitScancodeMap@@YAXXZ @ 0x1C01315A0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall InitScancodeMap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int ProfileValue; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  struct tagSCANCODEFLEXIBLEMAP *v12; // rdi

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap, a2, a3);
    gpScancodeMap = 0LL;
  }
  ProfileValue = FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, 0LL, 0, 0);
  v6 = ProfileValue;
  if ( ProfileValue - 13 <= 0xFFF1 )
  {
    v9 = Win32AllocPoolZInit(ProfileValue + 8LL, 1835234133LL);
    v10 = v9;
    if ( v9 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, v9, v6, 0);
      gpScancodeMap = v10;
    }
  }
  if ( gpFlexMap )
  {
    Win32FreePool(gpFlexMap, v4, v5);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v7 = FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, 0LL, 0, 0);
  v8 = v7;
  if ( v7 >= 0x10 && (v7 & 0xF) == 0 )
  {
    v11 = Win32AllocPoolZInit(v7, 1835234133LL);
    v12 = (struct tagSCANCODEFLEXIBLEMAP *)v11;
    if ( v11 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, v11, v8, 0);
      gdwFlexMapSize = v8 >> 4;
      gpFlexMap = v12;
    }
  }
}
