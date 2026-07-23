/*
 * XREFs of HvlCollectLivedump @ 0x1401C01E4
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

NTSTATUS __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v10; // r8
  PHYSICAL_ADDRESS v11; // rdx
  _QWORD *v12; // r14
  __int16 v13; // ax
  int v14; // esi
  void *v15; // rcx
  unsigned int v16; // ebx
  PHYSICAL_ADDRESS v17[4]; // [rsp+20h] [rbp-148h] BYREF
  PHYSICAL_ADDRESS v18[4]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v19[112]; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v20[32]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v21[64]; // [rsp+F0h] [rbp-78h] BYREF

  if ( (HvlpRootFlags & 2) == 0 || !qword_1403221E8 )
    return -1073741637;
  if ( VslVsmEnabled )
  {
    memset(v19, 0, 0x68uLL);
    result = VslpEnterIumSecureMode(1, 233LL, 0LL, (__int64)v19);
    if ( result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v8 = HvlpAcquireHypercallPage(v17, 1, (__int64)v21, 32LL);
    v9 = HvlpAcquireHypercallPage(v18, 2, (__int64)v20, 16LL);
    v10 = v18[3];
    v11 = v17[3];
    v12 = (_QWORD *)v9;
    *(_QWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 8) = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a2 + 16);
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
            142LL,
            (PHYSICAL_ADDRESS)v11.QuadPart,
            (PHYSICAL_ADDRESS)v10.QuadPart);
    if ( !v13 || v13 == 51 )
    {
      *a3 = *v12;
      v14 = 0;
    }
    else
    {
      v14 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)v17);
    HvlpReleaseHypercallPage((__int64)v18);
    if ( v14 >= 0 )
    {
      v15 = *(void **)(a4 + 32);
      v16 = dword_1403221F8 << 12;
      if ( v15 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v16 )
        memmove(v15, qword_1403221E8, v16);
      else
        *(_QWORD *)(a4 + 32) = qword_1403221E8;
      *(_DWORD *)(a4 + 40) = v16;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return v14;
  }
  return result;
}
