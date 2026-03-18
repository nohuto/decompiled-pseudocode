/*
 * XREFs of ?InitScancodeMap@@YAXXZ @ 0x1C0110D68
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void InitScancodeMap(void)
{
  unsigned int ProfileValue; // eax
  unsigned int v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  struct tagSCANCODEFLEXIBLEMAP *v7; // rdi

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  ProfileValue = FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, 0LL, 0, 0);
  v1 = ProfileValue;
  if ( ProfileValue - 13 <= 0xFFF1 )
  {
    v4 = Win32AllocPoolZInit(ProfileValue + 8LL, 1835234133LL);
    v5 = v4;
    if ( v4 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, v4, v1, 0);
      gpScancodeMap = v5;
    }
  }
  if ( gpFlexMap )
  {
    Win32FreePool(gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v2 = FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, 0LL, 0, 0);
  v3 = v2;
  if ( v2 >= 0x10 && (v2 & 0xF) == 0 )
  {
    v6 = Win32AllocPoolZInit(v2, 1835234133LL);
    v7 = (struct tagSCANCODEFLEXIBLEMAP *)v6;
    if ( v6 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, v6, v3, 0);
      gdwFlexMapSize = v3 >> 4;
      gpFlexMap = v7;
    }
  }
}
