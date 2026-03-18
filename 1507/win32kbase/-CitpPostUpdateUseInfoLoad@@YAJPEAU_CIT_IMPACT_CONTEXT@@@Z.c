/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0018638 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00527AC (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0079C24 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  _OWORD *v1; // r14
  __int64 result; // rax
  unsigned __int16 v4; // bx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  ULONG v9; // eax
  unsigned __int8 *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // r8d
  int v34; // r8d
  unsigned int v35; // [rsp+30h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-55h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v40; // [rsp+58h] [rbp-31h]
  unsigned __int16 v41[42]; // [rsp+5Ch] [rbp-2Dh] BYREF

  v1 = (_OWORD *)((char *)a1 + 600);
  KeyHandle = 0LL;
  v35 = 0;
  memset((char *)a1 + 600, 0, 0x50uLL);
  *((_DWORD *)a1 + 191) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v35);
  if ( (int)result >= 0 )
  {
    result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
    if ( (int)result >= 0 )
    {
      memset(v41, 0, 0x50uLL);
      v4 = 0;
      RtlInitUnicodeString(&DestinationString, L"PUUActive");
      ResultLength = 92;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x5Cu,
             &ResultLength) >= 0 )
      {
        if ( v40 == 80 )
        {
          if ( v41[12] == 208 && *(_DWORD *)v41 == v35 )
          {
            v5 = *(_OWORD *)&v41[8];
            *(_OWORD *)((char *)a1 + 680) = *(_OWORD *)v41;
            v6 = *(_OWORD *)&v41[16];
            *(_OWORD *)((char *)a1 + 696) = v5;
            v7 = *(_OWORD *)&v41[24];
            *(_OWORD *)((char *)a1 + 712) = v6;
            v8 = *(_OWORD *)&v41[32];
            *(_OWORD *)((char *)a1 + 728) = v7;
            *(_OWORD *)((char *)a1 + 744) = v8;
            goto LABEL_8;
          }
          goto LABEL_25;
        }
        if ( v40 >= 0x18 )
LABEL_25:
          v4 = v41[2];
      }
      memset(v41, 0, 0x50uLL);
      v41[2] = v4;
      *(_DWORD *)v41 = v35;
      v41[12] = 208;
      *(_QWORD *)&v41[36] = MEMORY[0xFFFFF78000000014];
      v29 = *(_OWORD *)&v41[8];
      *(_OWORD *)((char *)a1 + 680) = *(_OWORD *)v41;
      v30 = *(_OWORD *)&v41[16];
      *(_OWORD *)((char *)a1 + 696) = v29;
      v31 = *(_OWORD *)&v41[24];
      *(_OWORD *)((char *)a1 + 712) = v30;
      v32 = *(_OWORD *)&v41[32];
      *(_OWORD *)((char *)a1 + 728) = v31;
      *(_OWORD *)((char *)a1 + 744) = v32;
      CitpStatIncrement(&v41[2], 1);
LABEL_8:
      CitpStatIncrement(&v41[4], 1);
      if ( !(unsigned __int8)RtlIsMultiSessionSku() )
      {
LABEL_22:
        v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 496), v20);
        v21 = *((_QWORD *)a1 + 64);
        v22 = (unsigned int)dword_1C0101FC4;
        v23 = *(unsigned int *)&v41[6];
        v24 = *(_OWORD *)v41;
        v25 = *(_OWORD *)&v41[8];
        *((_DWORD *)a1 + 190) = v20;
        *v1 = v24;
        v26 = *(_OWORD *)&v41[16];
        v1[1] = v25;
        v27 = *(_OWORD *)&v41[24];
        v1[2] = v26;
        LODWORD(v21) = v21 - ((unsigned __int64)(unsigned int)v21 + 1000 * v23) % v22;
        result = 0LL;
        v28 = *(_OWORD *)&v41[32];
        *((_DWORD *)a1 + 191) = v21;
        v1[3] = v27;
        v1[4] = v28;
        return result;
      }
      v9 = RtlLengthSid(*((PSID *)a1 + 52));
      v10 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
      v11 = 314159LL;
      v12 = v9;
      if ( v9 >= 8uLL )
      {
        v13 = (unsigned __int64)v9 >> 3;
        v12 = v9 - 8 * v13;
        do
        {
          v14 = v10[7];
          v15 = 37
              * (v10[6]
               + 37 * (v10[5] + 37 * (v10[4] + 37 * (v10[3] + 37 * (v10[2] + 37 * (v10[1] + 37 * (*v10 + 37 * v11)))))));
          v10 += 8;
          v11 = v14 + v15;
          --v13;
        }
        while ( v13 );
      }
      if ( (unsigned __int64)(v12 - 1) <= 6 )
      {
        v16 = v12 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v33 = v19 - 1;
                if ( v33 )
                {
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    if ( v34 != 1 )
                      goto LABEL_21;
                    LODWORD(v11) = *v10++ + 37 * v11;
                  }
                  LODWORD(v11) = *v10++ + 37 * v11;
                }
                LODWORD(v11) = *v10++ + 37 * v11;
              }
              LODWORD(v11) = *v10++ + 37 * v11;
            }
            LODWORD(v11) = *v10++ + 37 * v11;
          }
          LODWORD(v11) = *v10++ + 37 * v11;
        }
        LODWORD(v11) = *v10 + 37 * v11;
      }
LABEL_21:
      *(_DWORD *)&v41[16] = v11;
      goto LABEL_22;
    }
  }
  return result;
}
