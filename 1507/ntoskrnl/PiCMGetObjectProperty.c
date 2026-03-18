/*
 * XREFs of PiCMGetObjectProperty @ 0x140440E88
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiCMReleasePropertyInputData @ 0x1404410D0 (PiCMReleasePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     PiCMCapturePropertyInputData @ 0x140441214 (PiCMCapturePropertyInputData.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  PVOID PoolWithTag; // rsi
  int v10; // ebx
  __int64 v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // r14d
  int ObjectProperty; // eax
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp-61h]
  _BYTE v20[4]; // [rsp+70h] [rbp-59h] BYREF
  int v21; // [rsp+74h] [rbp-55h]
  int v22; // [rsp+78h] [rbp-51h]
  __int64 v23; // [rsp+80h] [rbp-49h]
  _BYTE v24[20]; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v25; // [rsp+A0h] [rbp-29h]
  __int64 v26; // [rsp+A8h] [rbp-21h]
  int v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+B4h] [rbp-15h]

  v6 = a6;
  v19 = a6;
  v18 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v17 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, v20);
  if ( v10 < 0 )
    goto LABEL_24;
  v11 = v23;
  if ( v23 && !v21 && !v26 && !v27 && !v25 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_35;
    }
    if ( (v22 & 0x7FFF0000) == 0 )
    {
      if ( (v22 & 0x80000000) == 0x80000000 )
      {
        v12 = 0;
        if ( (unsigned __int16)v22 < 0xBu )
          v12 = (unsigned __int16)v22;
LABEL_13:
        if ( v12 )
          goto LABEL_14;
        goto LABEL_36;
      }
      switch ( (unsigned __int16)v22 )
      {
        case 1u:
          v12 = 1;
          goto LABEL_13;
        case 2u:
          v12 = 2;
          goto LABEL_14;
        case 3u:
          v12 = 4;
          goto LABEL_14;
        case 4u:
          v12 = 3;
          goto LABEL_14;
      }
    }
    v12 = 0;
LABEL_36:
    v10 = -1073741811;
LABEL_14:
    if ( v10 < 0 )
      goto LABEL_35;
    v13 = a4 - 20;
    if ( a4 != 20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x34706E50u);
      if ( !PoolWithTag )
        v10 = -1073741670;
    }
    if ( v10 < 0 )
      goto LABEL_35;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v11,
                       v12,
                       0LL,
                       0LL,
                       (__int64)v24,
                       (__int64)&v18,
                       (__int64)PoolWithTag,
                       v13,
                       (__int64)&v17,
                       0);
    v6 = v19;
    v10 = ObjectProperty;
    goto LABEL_20;
  }
  v10 = -1073741811;
LABEL_20:
  if ( v10 >= 0 )
  {
    v15 = PiCMReturnBufferResultData((unsigned int)v10, v17, v18, PoolWithTag, v17, v28, a3, a4, v6);
    goto LABEL_22;
  }
LABEL_35:
  v15 = PiCMReturnBufferResultData((unsigned int)v10, v17, v18, 0LL, 0, v28, a3, a4, v19);
LABEL_22:
  v10 = v15;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_24:
  PiCMReleasePropertyInputData(v20);
  return (unsigned int)v10;
}
