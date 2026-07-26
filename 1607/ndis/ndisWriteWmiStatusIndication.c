/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C00176D4
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C00178A4 (ndisWmiGetGuid.c)
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, int a2, __int64 a3, int a4, int *Src, int a6)
{
  bool v9; // di
  __int64 result; // rax
  _DWORD *v11; // rbp
  int v12; // edx
  size_t v13; // rbx
  int v14; // r15d
  int v15; // r13d
  int v16; // r13d
  int v17; // ecx
  PVOID v18; // r14
  unsigned int *v19; // rdi
  _DWORD *v20; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  bool v23; // [rsp+30h] [rbp-38h]
  PVOID WnodeEventItem; // [rsp+38h] [rbp-30h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v25 = a4;
  v9 = (unsigned int)(a4 - 1073807371) <= 1;
  v23 = v9;
  result = ndisWmiGetGuid(&WnodeEventItem, a1, 0LL);
  if ( (int)result >= 0 )
  {
    v11 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v12 = *((_DWORD *)WnodeEventItem + 6);
      if ( v12 < 0 && (*(_DWORD *)(a3 + 24) & 1) == 0 )
      {
        v13 = a6 & (unsigned int)-(Src != 0LL);
        v14 = v13 + 4;
        if ( (v12 & 0x10) == 0 )
          v14 = Src != 0LL ? a6 : 0;
        v15 = v14;
        if ( (v12 & 0x200) != 0 )
        {
          v16 = *(unsigned __int16 *)(a1 + 3864) + 46;
        }
        else
        {
          if ( !v9 )
          {
LABEL_12:
            ndisSetupWmiNode(a1, a2, v15, (_DWORD)WnodeEventItem, (__int64)&WnodeEventItem);
            v18 = WnodeEventItem;
            if ( WnodeEventItem )
            {
              v19 = (unsigned int *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
              if ( (v11[6] & 0x200) != 0 )
              {
                *v19 = v15 - 4;
                v20 = v19 + 1;
                *v20 = 2621699;
                v20[1] = *(_DWORD *)(a1 + 4112);
                *((_QWORD *)v20 + 1) = *(_QWORD *)(a1 + 4080);
                v20[6] = *(_DWORD *)(a3 + 16);
                if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
                  *((_QWORD *)v20 + 2) = *(_QWORD *)(a3 + 40);
                v20[7] = *(unsigned __int16 *)(a1 + 3864);
                v20[8] = v14 + 40;
                memmove(
                  (char *)v20 + (unsigned int)(v14 + 40),
                  *(const void **)(a1 + 3872),
                  *(unsigned __int16 *)(a1 + 3864));
                v19 = v20 + 10;
              }
              v21 = v11[6];
              if ( (_DWORD)v13 )
              {
                if ( (v21 & 0x10) != 0 )
                {
                  *v19++ = (unsigned int)v13 / v11[5];
                }
                else if ( v25 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
                {
                  v25 = 3;
                  Src = &v25;
                  v13 = 4LL;
                }
                memmove(v19, Src, v13);
                v19 = (unsigned int *)((char *)v19 + v13);
              }
              else if ( (v21 & 0x10) != 0 )
              {
                *v19++ = 0;
              }
              if ( v23 )
                memmove(v19, *(const void **)(a1 + 3872), *(unsigned __int16 *)(a1 + 3864));
              v22 = IoWMIWriteEvent(v18);
              if ( (v22 & 0x80000000) == 0 )
                return v22;
            }
            else
            {
              v22 = -1073741670;
            }
            if ( (unsigned __int8)byte_1C00895DF >= 2u )
              WPP_SF_qD(51LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v22);
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
              Template_qqq(v17, (unsigned int)&IoWMIWriteEventFailed, a1 + 4064, v22, 154, 0);
            if ( v18 )
              ExFreePoolWithTag(v18, 0);
            return v22;
          }
          v16 = *(unsigned __int16 *)(a1 + 3864) + 2;
        }
        v15 = v14 + v16;
        goto LABEL_12;
      }
    }
    return (unsigned int)result;
  }
  return result;
}
