/*
 * XREFs of ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123FE0
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0123D68 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023AE10 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0123EE8 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::ReadSettings(InteractiveControlSettings *this, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rbx
  int v5; // r15d
  __int64 v6; // rsi
  const WCHAR *v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  char KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+54h] [rbp-1Ch]
  int v22; // [rsp+58h] [rbp-18h]
  unsigned int v23; // [rsp+5Ch] [rbp-14h]

  ResultLength = 0;
  KeyHandle = 0LL;
  v4 = (unsigned int *)&unk_1C02E2EE8;
  v5 = InteractiveControlSettings::_OpenDeviceKey(this, 0x20019u, a3, &KeyHandle);
  v6 = 29LL;
  if ( v5 < 0 )
  {
    do
    {
      *((_DWORD *)this + 2 * *v4) = v4[1];
      v15 = *v4;
      v16 = v4[1];
      v4 += 4;
      *((_DWORD *)this + 2 * v15 + 1) = v16;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    do
    {
      v7 = (const WCHAR *)*((_QWORD *)v4 - 1);
      if ( v7 )
      {
        ResultLength = 0;
        RtlInitUnicodeString(&DestinationString, v7);
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) < 0
          || v21 != 4
          || (v8 = v23, v22 != 4) )
        {
          v8 = v4[1];
        }
        *((_DWORD *)this + 2 * *v4) = v8;
        *((_DWORD *)this + 2 * *v4 + 1) = v4[1];
      }
      v4 += 4;
      --v6;
    }
    while ( v6 );
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v9 = *((_DWORD *)this + 12);
  if ( v9 <= 2 )
  {
    v12 = v9 << 8;
    v11 = 32;
  }
  else
  {
    if ( (unsigned int)(v9 - 3) > 7 )
    {
      v13 = ((v9 - 6) << 8) / 4;
      goto LABEL_13;
    }
    v10 = v9 - 2;
    v11 = 8;
    v12 = v10 << 8;
  }
  v13 = v12 / v11;
LABEL_13:
  *((_DWORD *)this + 14) = v13;
  return (unsigned int)v5;
}
