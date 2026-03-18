/*
 * XREFs of FreeDdeXact @ 0x1402930F0
 * Callers:
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402CCA14 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400296A0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401BA348 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1402CCAB8 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     GreDeleteServerMetaFile @ 0x140325B80 (GreDeleteServerMetaFile.c)
 */

void __fastcall FreeDdeXact(struct _HEAD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v6, a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v4 = *((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 16) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_QWORD *)(v4 + 48));
      if ( (*((_DWORD *)a1 + 16) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*((_QWORD *)a1 + 7) + 74LL), *(void **)(*((_QWORD *)a1 + 7) + 48LL));
        *((_DWORD *)a1 + 16) &= ~0x2000u;
      }
      Win32FreePool(*((void **)a1 + 7));
    }
    HMFreeObject(a1);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v6, v5);
  }
  else if ( v6 )
  {
    *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19800) = 0LL;
  }
}
